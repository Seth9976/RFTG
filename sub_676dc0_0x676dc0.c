// 函数名称: sub_676dc0
// 虚拟地址: 0x676dc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_676dc0(int32_t arg1, int32_t arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: uint32_t result_3 = zx.d(*(arg3 + 2))
    uint32_t result_3 = zx.d(*(arg3 + 2))
    int32_t edx = 0
    uint32_t result_1 = 0xffffffff
    int32_t ecx = 7
    int32_t esi = 4
    
    if (result_3 == 0)
        ecx = 0x8a
        esi = result_3 + 3
    
    uint32_t result = 0xffff
    *(arg3 + (arg1 << 2) + 6) = 0xffff
    
    if (arg1 s>= 0)
        void* var_8_1 = arg3 + 6
        int32_t i_1 = arg1 + 1
        uint32_t result_2 = result_3
        int32_t i
        
        do
            result = result_2
            result_2 = zx.d(*var_8_1)
            edx += 1
            
            if (edx s>= ecx || result != result_2)
                if (edx s< esi)
                    *(arg4 + (result << 2) + 0xa7c) += edx.w
                else if (result != 0)
                    if (result != result_1)
                        *(arg4 + (result << 2) + 0xa7c) += 1
                    
                    *(arg4 + 0xabc) += 1
                else if (edx s> 0xa)
                    *(arg4 + 0xac4) += 1
                else
                    *(arg4 + 0xac0) += 1
                
                edx = 0
                result_1 = result
                
                if (result_2 == 0)
                    ecx = 0x8a
                    esi = 3
                else if (result != result_2)
                    ecx = 7
                    esi = 4
                else
                    ecx = 6
                    esi = 3
            
            var_8_1 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
