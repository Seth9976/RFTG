// 函数名称: sub_469ff0
// 虚拟地址: 0x469ff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_469ff0(int32_t arg1)
{
    // 第一条实际指令: void var_3c
    void var_3c
    int32_t eax_1 = __security_cookie ^ &var_3c
    void* eax_2 = sub_46b2b0(arg1)
    void* ecx = data_27e7a40
    *(eax_2 + 0x1c) = 0
    *(eax_2 + 0x1a08) = 0
    *(eax_2 + 0x1a0c) = 0
    *(eax_2 + 0x1f30) = 0
    *(eax_2 + 0x1f34) = 0
    *(eax_2 + 0x550) = 0
    *(eax_2 + 0xa94) = 0
    *(eax_2 + 0x558) = 0
    *(eax_2 + 0x554) = 0
    void* edi = *(ecx + 0x548)
    
    if (*(edi + 0x2c078) == 1 && *(edi + 0x210) == 0)
        sub_4d6480(data_307bef0)
        sub_4d66f0(&var_3c)
    
    *(edi + 0x210) = 6
    *(edi + 0x2c078) = 0
    *(edi + 0x214) = 0
    *(eax_2 + 8) = 0
    sub_5a6aba(eax_1 ^ &var_3c)
    return 0
}
