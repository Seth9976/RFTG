// 函数名称: sub_5c5f10
// 虚拟地址: 0x5c5f10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5c5f10(int32_t arg1, int16_t arg2, int32_t arg3, void* arg4 @ esi, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t ebx = 0
    char* edi = nullptr
    
    if (arg8 u< 0)
        return 
    
    if (arg8 u> 0)
        goto label_5c5f37
    
    if (arg7 u<= 0)
        return 
    
    edi = nullptr
    label_5c5f37:
    
    while (true)
        arg3.b = edi[arg6]
        var_8:3.b = arg3.b
        
        if (arg9 == 0)
            uint32_t eax_1 = zx.d(*(arg4 + 0x14)) | 2
            arg3.b ^= (((eax_1 ^ 1) * eax_1) s>> 8).b
            var_8:3.b = arg3.b
        
        if (arg5 != 0)
            edi[arg5] = arg3.b
        
        int32_t eax_4 = not.d(sub_673170(not.d(*(arg4 + 0xc)), &var_8:3, 1))
        *(arg4 + 0xc) = eax_4
        int32_t eax_8 = (zx.d(eax_4.b) + *(arg4 + 0x10)) * 0x8088405 + 1
        *(arg4 + 0x10) = eax_8
        var_8:3.b = (eax_8 u>> 0x18).b
        int32_t eax_12
        eax_12, arg3 = sub_673170(not.d(*(arg4 + 0x14)), &var_8:3, 1)
        char* temp1_1 = edi
        edi = &edi[1]
        ebx = adc.d(ebx, 0, temp1_1 u>= 0xffffffff)
        *(arg4 + 0x14) = not.d(eax_12)
        
        if (ebx u>= arg8)
            if (ebx u> arg8)
                break
            
            if (edi u>= arg7)
                break
}
