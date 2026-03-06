// 函数名称: sub_49dea0
// 虚拟地址: 0x49dea0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49dea0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t i = sx.d(*(arg1 * 0xb4 + arg2 + 0x56))
    int32_t i = sx.d(*(arg1 * 0xb4 + arg2 + 0x56))
    int32_t result = 0
    int32_t result_1 = 0
    int16_t var_10 = i.w
    
    while (i != 0xffffffff)
        int32_t edx_1 = i * 5
        void* ecx_1 = *(arg2 + (edx_1 << 2) + 0x46c)
        void* ebx_1 = arg2 + (edx_1 << 2)
        int32_t j = 0
        
        if (*(ecx_1 + 0x15) s> 0)
            int32_t esi_1 = 0
            int32_t var_c_1 = 0
            void* edi = arg4 + (result << 3) + 4
            
            do
                if ((zx.d(*(ebx_1 + 0x468)) & 1 << (j.b + 8)) == 0
                        && sx.d(*(esi_1 + ecx_1 + 0x18)) == arg3 && (*(esi_1 + ecx_1 + 0x18) != 3
                        || (*(esi_1 + ecx_1 + 0x20) & 0x20) == 0 || *(ebx_1 + 0x465) == 3))
                    uint32_t ecx_3
                    ecx_3.w = var_10
                    result_1 += 1
                    *(edi - 4) = ecx_3.w
                    *(edi - 2) = j.b
                    *edi = esi_1 + ecx_1 + 0x18
                    edi += 8
                
                ecx_1 = *(ebx_1 + 0x46c)
                j += 1
                esi_1 = var_c_1 + 0x18
                var_c_1 = esi_1
            while (j s< sx.d(*(ecx_1 + 0x15)))
            
            result = result_1
        
        i = sx.d(*(ebx_1 + 0x476))
        var_10 = i.w
    
    return result
}
