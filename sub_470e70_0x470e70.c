// 函数名称: sub_470e70
// 虚拟地址: 0x470e70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_470e70(int32_t arg1)
{
    // 第一条实际指令: void var_40
    void var_40
    int32_t eax_1 = __security_cookie ^ &var_40
    void* eax_2
    int32_t edx
    eax_2, edx = sub_46b2b0(arg1)
    *(eax_2 + 0x1c) = 0x19
    void arg_4
    sub_46aca0(eax_2 + 0xaa4, edx, &arg_4, 1)
    void* eax_4 = data_27e7a40
    *(eax_2 + 0x1a08) = 1
    void* esi_2 = *(eax_4 + 0x548)
    
    if (*(esi_2 + 0x2c078) == 1 && *(esi_2 + 0x210) == 0)
        sub_4d6480(data_307bef0)
        void var_3c
        sub_4d66f0(&var_3c)
    
    *(esi_2 + 0x2c078) = 0
    *(esi_2 + 0x214) = 0
    *(esi_2 + 0x210) = 2
    sub_5a6aba(eax_1 ^ &var_40)
    return 0
}
