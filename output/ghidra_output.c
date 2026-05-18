void login(void)

{
  int iVar1;
  char local_1f [10];
  char local_15 [13];
  
  builtin_strncpy(local_15,"P@ssw0rd2026",0xd);
  printf("Enter password: ");
  gets(local_1f);
  iVar1 = strcmp(local_1f,local_15);
  if (iVar1 == 0) {
    printf("Access Granted!\n");
  }
  else {
    printf("Access Denied!\n");
  }
  return;
}