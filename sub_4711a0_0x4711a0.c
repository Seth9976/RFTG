// 函数名称: sub_4711a0
// 虚拟地址: 0x4711a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4711a0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4 @ edi, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: void var_40
    void var_40
    int32_t eax_1 = __security_cookie ^ &var_40
    void* eax_2
    int32_t edx
    eax_2, edx = sub_46b2b0(arg2)
    *(eax_2 + 0x1f7c) = arg5 + 1
    edx.b = arg6 s<= arg5
    *(eax_2 + 0x1c) = 0x1e
    *(eax_2 + 0x1f80) = edx.b
    *(eax_2 + 0x1a08) = *arg3
    sub_46aca0(eax_2 + 0xaa4, edx, arg7, *arg3)
    int32_t edx_1 = *arg4
    *(eax_2 + 0x1f30) = edx_1
    sub_46aca0(eax_2 + 0x1a10, edx_1, arg8, *arg4)
    void* esi_2 = *(data_27e7a40 + 0x548)
    
    if (*(esi_2 + 0x2c078) == 1 && *(esi_2 + 0x210) == 0)
        sub_4d6480(data_307bef0)
        void var_3c
        sub_4d66f0(&var_3c)
    
    *(esi_2 + 0x210) = 0
    *(esi_2 + 0x2c078) = 0
    *(esi_2 + 0x214) = 1
    sub_5a6aba(eax_1 ^ &var_40)
    return 0
}
