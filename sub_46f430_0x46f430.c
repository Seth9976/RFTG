// 函数名称: sub_46f430
// 虚拟地址: 0x46f430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_46f430(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: void var_44
    void var_44
    int32_t eax_1 = __security_cookie ^ &var_44
    void* eax_2
    int32_t edx
    eax_2, edx = sub_46b2b0(arg4)
    *(eax_2 + 0x1c) = 5
    
    if (arg6 != 0)
        *(eax_2 + 0x1c) = 3
    
    *(eax_2 + 0x1a08) = *arg2
    sub_46aca0(eax_2 + 0xaa4, edx, arg5, *arg2)
    void* edx_1 = data_27e7a40
    *(eax_2 + 0x550) = 0
    *(eax_2 + 0x554) = arg3
    *(eax_2 + 0x558) = arg3
    *(eax_2 + 0x56c) = arg7
    void* esi_2 = *(edx_1 + 0x548)
    void* result
    result.b = arg3 != 0
    char var_40 = result.b
    
    if (*(esi_2 + 0x2c078) == 1 && result.b == 0 && *(esi_2 + 0x210) == 0)
        sub_4d6480(data_307bef0)
        void var_3c
        sub_4d66f0(&var_3c)
        result.b = var_40
    
    *(esi_2 + 0x210) = 0
    *(esi_2 + 0x2c078) = result.b
    *(esi_2 + 0x214) = result.b == 0
    
    if (arg7 == 0)
        result = *(data_27e7a40 + 0x548)
        *(result + 0x4389c) = fconvert.s(fconvert.t(-1f))
    
    sub_5a6aba(eax_1 ^ &var_44)
    return result
}
