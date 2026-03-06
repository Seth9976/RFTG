// 函数名称: sub_470330
// 虚拟地址: 0x470330
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_470330(int32_t arg1, int128_t* arg2, int32_t arg3, int32_t* arg4 @ edi, int32_t arg5)
{
    // 第一条实际指令: void var_40
    void var_40
    int32_t eax_1 = __security_cookie ^ &var_40
    void* eax_2
    int32_t edx
    eax_2, edx = sub_46b2b0(arg3)
    *(eax_2 + 0x1c) = 0xc
    sub_46aca0(eax_2 + 0xaa4, edx, arg5, *arg4)
    sub_5ab990(eax_2 + 0x14e4, arg2, *arg4 * 4)
    void* ecx_4 = data_27e7a40
    *(eax_2 + 0x1a08) = *arg4
    void* esi_2 = *(ecx_4 + 0x548)
    
    if (*(esi_2 + 0x2c078) == 1 && *(esi_2 + 0x210) == 0)
        sub_4d6480(data_307bef0)
        void var_3c
        sub_4d66f0(&var_3c)
    
    int32_t result
    result.b = 0
    *(esi_2 + 0x210) = 2
    *(esi_2 + 0x2c078) = 0
    *(esi_2 + 0x214) = 0
    sub_5a6aba(eax_1 ^ &var_40)
    return result
}
