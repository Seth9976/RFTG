// 函数名称: sub_49db70
// 虚拟地址: 0x49db70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49db70(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t edx = arg4
    int32_t edx = arg4
    int32_t i = sx.d(*(arg3 * 0xb4 + edx + 0x46))
    int32_t result = 0
    
    if (i != 0xffffffff)
        int32_t ebx
        int32_t var_c_1 = ebx
        
        do
            int32_t eax
            eax.b = *(edx + i * 0x14 + 0x472)
            
            if (eax.b != 0)
                ebx.b = *(*(edx + i * 0x14 + 0x46c) + 0xe)
                
                if ((ebx.b == 1 || sx.d(ebx.b) == arg6) && (*(edx + i * 0x14 + 0x468) & 0x40) == 0)
                    int32_t j = 0
                    
                    if (eax.b s> 0)
                        do
                            if (arg5 != 0)
                                *(arg5 + (result << 2)) = i
                            
                            j += 1
                            result += 1
                        while (j s< sx.d(*(edx + i * 0x14 + 0x472)))
            
            edx = arg4
            i = sx.d(*(edx + ((i * 5 + 0x11d) << 2)))
        while (i != 0xffffffff)
    
    return result
}
