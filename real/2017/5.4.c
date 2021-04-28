//
// Created by 57054 on 2020/10/27.
//
#include "stdio.h"
#include "stdlib.h"

#define M 12
struct GDPInfo {
    char chMonth[8];
    double dInvest;
    double dNetEx;
    double dConsumn;
    double dGper;
} year_2015[M], year_2016[M];

int main(void) {
    FILE *fp1, *fp2, *fp3;
    if ((fp1 = fopen("GDP_2015.dat", "rb")) == NULL) {
        fprintf(stderr, "Cannot open this file");
        exit(EXIT_FAILURE);
    }
    if ((fp2 = fopen("GDP_2016.dat", "rb")) == NULL) {
        fprintf(stderr, "Cannot open this file");
        exit(EXIT_FAILURE);
    }
    if ((fp3 = fopen("total.txt", "w")) == NULL) {
        fprintf(stderr, "Cannot open this file");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < M; ++i) {
        fread(&year_2015[i], sizeof(struct GDPInfo), 1, fp1);
        fread(&year_2016[i], sizeof(struct GDPInfo), 1, fp2);
    }
    double GDP_2015 = 0.0, GDP_2016 = 0.0;
    for (int i = 0; i < M; ++i) {
        GDP_2015 += year_2015[i].dInvest + year_2015[i].dNetEx + year_2015[i].dConsumn + year_2015[i].dGper;
        GDP_2016 += year_2016[i].dInvest + year_2016[i].dNetEx + year_2016[i].dConsumn + year_2016[i].dGper;
    }
    fwrite(&GDP_2015, sizeof(double), 1, fp3);
    fwrite(&GDP_2016, sizeof(double), 1, fp3);
    double dInvest_2015 = 0, dInvest_2016 = 0, rate_dInvest;
    double dNetEx_2015 = 0, dNetEx_2016 = 0, rate_dNetEx;
    double dConsumn_2015 = 0, dConsumn_2016 = 0, rate_dConsumn;
    double dGper_2015 = 0, dGper_2016 = 0, rate_dGper;
    for (int i = 0; i < M; ++i) {
        dInvest_2015 += year_2015[i].dInvest;
        dInvest_2016 += year_2016[i].dInvest;
        dNetEx_2015 += year_2015[i].dNetEx;
        dNetEx_2016 += year_2016[i].dNetEx;
        dConsumn_2015 += year_2015[i].dConsumn;
        dConsumn_2016 += year_20165[i].dConsumn;
        dGper_2015 += year_2015[i].dGper;
        dGper_2016 += year_2016[i].dGper;
    }
    rate_dInvest = (dInvest_2015 - dInvest_2016) / dInvest_2015;
    rate_dNetEx = (dNetEx_2015 - dNetEx_2016) / dNetEx_2015;
    rate_dConsumn = (dConsumn_2015 - dConsumn_2016) / dConsumn_2015;
    rate_dGper = (dGper_2015 - dGper_2016) / dGper_2015;
    fwrite(&rate_dInvest,sizeof (double),1,fp3);
    fwrite(&rate_dNetEx,sizeof (double),1,fp3);
    fwrite(&rate_dConsumn,sizeof (double),1,fp3);
    fwrite(&rate_dGper,sizeof (double),1,fp3);
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
