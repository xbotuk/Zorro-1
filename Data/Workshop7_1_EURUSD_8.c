// Prediction rules generated by Zorro

int eqF(float);
double eq0(float);
double belowF(double,double);

int EURUSD_L(float* sig)
{
  if(sig[5]<sig[1] && sig[1]<sig[2] && sig[2]<sig[6] && sig[6]<sig[3] && sig[3]<sig[0] && sig[0]<sig[7] && sig[7]<sig[4] && sig[9]<sig[13] && sig[13]<sig[14] && sig[14]<sig[10] && sig[10]<sig[15] && sig[15]<sig[12] && sig[12]<sig[11] && sig[11]<sig[8])
    return 24;
  if(sig[1]<sig[5] && sig[5]<sig[2] && sig[2]<sig[6] && sig[6]<sig[7] && sig[7]<sig[4] && sig[4]<sig[3] && sig[3]<sig[0] && sig[9]<sig[13] && sig[13]<sig[15] && sig[15]<sig[14] && sig[14]<sig[12] && sig[12]<sig[10] && sig[10]<sig[11] && sig[11]<sig[8])
    return 38;
  if(sig[1]<sig[5] && sig[5]<sig[6] && sig[6]<sig[7] && sig[7]<sig[4] && sig[4]<sig[2] && sig[2]<sig[3] && sig[3]<sig[0] && sig[13]<sig[9] && sig[9]<sig[10] && sig[10]<sig[11] && sig[11]<sig[8] && sig[8]<sig[14] && sig[14]<sig[15] && sig[15]<sig[12])
    return 95;
  return 0;
}

int EURUSD_S(float* sig)
{
  if(sig[5]<sig[1] && sig[1]<sig[2] && sig[2]<sig[6] && sig[6]<sig[3] && sig[3]<sig[0] && sig[0]<sig[7] && sig[7]<sig[4] && sig[9]<sig[10] && sig[10]<sig[15] && sig[15]<sig[11] && sig[11]<sig[8] && sig[8]<sig[13] && sig[13]<sig[14] && sig[14]<sig[12])
    return 4;
  if(sig[1]<sig[2] && sig[2]<sig[7] && sig[7]<sig[3] && sig[3]<sig[0] && sig[0]<sig[5] && sig[5]<sig[6] && sig[6]<sig[4] && sig[13]<sig[11] && sig[11]<sig[14] && sig[14]<sig[15] && sig[15]<sig[12] && sig[12]<sig[9] && sig[9]<sig[10] && sig[10]<sig[8])
    return 89;
  if(sig[5]<sig[1] && sig[1]<sig[6] && sig[6]<sig[2] && sig[2]<sig[3] && sig[3]<sig[0] && sig[0]<sig[7] && sig[7]<sig[4] && sig[9]<sig[13] && sig[13]<sig[10] && sig[10]<sig[15] && sig[15]<sig[14] && sig[14]<sig[12] && sig[12]<sig[11] && sig[11]<sig[8])
    return 300;
  return 0;
}
