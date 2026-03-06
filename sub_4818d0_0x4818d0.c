// 函数名称: sub_4818d0
// 虚拟地址: 0x4818d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4818d0(char* arg1, int32_t arg2 @ esi)
{
    // 第一条实际指令: void var_48
    void var_48
    int32_t eax_1 = __security_cookie ^ &var_48
    char eax_2
    int32_t ecx
    int32_t edx
    eax_2, ecx, edx = sub_4084a0(arg1, 0x27d401c)
    
    if (eax_2 == 0)
        int32_t eax_3 = sub_4c5680("replay does not exist")
        sub_5a6aba(eax_1 ^ &var_48)
        return eax_3
    
    char* var_44 = arg1
    int32_t var_40 = 4
    sub_42dd70(&var_44, edx, ecx, &var_44, 0, 0, arg2)
    void* esi_1 = *(data_27e7a40 + 0x548)
    
    if (*(esi_1 + 0x2c078) == 1 && *(esi_1 + 0x210) == 0)
        sub_4d6480(data_307bef0)
        void var_3c
        sub_4d66f0(&var_3c)
    
    *(esi_1 + 0x2c078) = 0
    *(esi_1 + 0x214) = 0
    int32_t eax_5 = data_307c794
    *(esi_1 + 0x210) = 3
    data_30d6f38 = eax_5
    data_30d6f41 = 1
    sub_5a6aba(eax_1 ^ &var_48)
    return eax_5
}
