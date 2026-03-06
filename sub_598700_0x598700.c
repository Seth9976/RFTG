// 函数名称: sub_598700
// 虚拟地址: 0x598700
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_598700(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, char* arg5, int32_t arg6)
{
    // 第一条实际指令: char* edi = arg5
    char* edi = arg5
    
    if (arg2 s<= 0)
        return 
    
    void* var_8_1 = arg1 + 2
    void* eax_2 = arg4 - edi
    void* ecx = arg3 - edi
    void* var_10_1 = eax_2
    void* var_14_1 = ecx
    int32_t var_c_1 = arg2
    
    while (true)
        int32_t eax_4 = zx.d(*edi) - 0x80
        int32_t ecx_2 = zx.d(*(ecx + edi)) - 0x80
        int32_t esi_3 = (zx.d(*(eax_2 + edi)) << 0x10) + 0x8000
        int32_t edx_3 = (eax_4 * 0x166e9 + esi_3) s>> 0x10
        arg1 = (eax_4 * 0xffff492e - ecx_2 * 0x581a + esi_3) s>> 0x10
        int32_t ecx_5 = (ecx_2 * 0x1c5a2 + esi_3) s>> 0x10
        
        if (edx_3 u> 0xff)
            edx_3 = zx.d((edx_3 s< 0).b - 1)
        
        if (arg1 u> 0xff)
            arg1 = zx.d((arg1 s< 0).b - 1)
        
        if (ecx_5 u> 0xff)
            ecx_5 = zx.d((ecx_5 s< 0).b - 1)
        
        char* esi_4 = var_8_1
        esi_4[0xfffffffe] = edx_3.b
        esi_4[0xffffffff] = arg1.b
        *esi_4 = ecx_5.b
        esi_4[1] = 0xff
        edi = &edi[1]
        int32_t temp0_1 = var_c_1
        var_c_1 -= 1
        var_8_1 = &esi_4[arg6]
        
        if (temp0_1 == 1)
            break
        
        eax_2 = var_10_1
        ecx = var_14_1
}
