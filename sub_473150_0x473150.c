// 函数名称: sub_473150
// 虚拟地址: 0x473150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_473150(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4 @ edi, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t ebx = arg5
    int32_t ebx = arg5
    int32_t esi = *(arg4 + 0xf4240)
    int32_t var_c = 0
    
    if (esi s> 0)
        void* var_8_1 = arg4
        int32_t eax_14
        
        do
            int32_t edx = *var_8_1
            
            if (edx << 0x1c s>> 0x1c == ebx && edx << 0x18 s>> 0x1c == arg6
                    && edx << 0x14 s>> 0x1c == arg7 && edx << 0x10 s>> 0x1c == arg8
                    && edx << 4 s>> 0x14 == arg3)
                return var_8_1
            
            var_8_1 += 0x14
            ebx = arg5
            eax_14 = var_c + 1
            var_c = eax_14
        while (eax_14 s< esi)
    
    int32_t eax_15 = esi * 5
    *(arg4 + 0xf4240) = esi + 1
    void* eax_16 = arg4 + (eax_15 << 2)
    int32_t ecx_9 =
        ((((arg3 & 0xfff) << 4 | (arg8 & 0xf)) << 4 | (arg7 & 0xf)) << 4 | (arg6 & 0xf)) << 4
        | (ebx & 0xf) | (*(arg4 + (eax_15 << 2)) & 0xf0000000)
    *eax_16 = ecx_9
    *(eax_16 + 4) = 0
    *(eax_16 + 0xc) = 0
    *(eax_16 + 8) = 0
    return eax_16
}
