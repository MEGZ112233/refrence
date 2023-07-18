int inv[N] = {1} ; 
void inv_on_range (int m ){
  for (int i =2 ; i<m ; i++){
    // take care from integer overflow 
    inv[i] = m -  1ll*(m/i)*inv[m%i]%m ; 
  }
}
