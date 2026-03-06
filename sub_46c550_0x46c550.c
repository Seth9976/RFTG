// 函数名称: sub_46c550
// 虚拟地址: 0x46c550
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46c550(int32_t arg1, int32_t arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: void var_44
    void var_44
    int32_t eax_1 = __security_cookie ^ &var_44
    void* eax_2 = sub_46b2b0(arg2)
    
    if (*(eax_2 + 0xa94) != 0)
        int32_t var_54_3 = 1
        sub_469e10(arg3, arg2, 0xb, 0, arg4 + 0x7c, 1, 
            sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *(eax_2 + 0x574)) + 0x7c, 1)
        sub_469ff0(arg2)
        sub_5a6aba(eax_1 ^ &var_44)
        return 0
    
    void* edx = data_27e7a40
    *(eax_2 + 0x574) = *(arg4 + 0xac)
    *(eax_2 + 0xa94) = 1
    void* edi_1 = *(edx + 0x548)
    
    if (*(edi_1 + 0x2c078) == 1 && *(edi_1 + 0x210) == 0)
        sub_4d6480(data_307bef0)
        void var_3c
        sub_4d66f0(&var_3c)
    
    *(edi_1 + 0x210) = 6
    *(edi_1 + 0x2c078) = 0
    *(edi_1 + 0x214) = 0
    int32_t* ecx_2 = *(eax_2 + 0x1a0c)
    int32_t* var_54_2 = ecx_2
    void* var_58 = eax_2 + 0x1a08
    int32_t result = sub_46c450(*(arg4 + 0x7c), arg3, ecx_2, arg3)
    sub_5a6aba(eax_1 ^ &var_44)
    return result
}
