// 函数名称: sub_528fa0
// 虚拟地址: 0x528fa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_528fa0(void* arg1, int32_t arg2, int32_t* arg3, char arg4)
{
    // 第一条实际指令: int32_t result
    int32_t result
    int32_t edx
    
    if (arg4 == 0)
        int32_t ecx_3 = *arg3
        edx = *(arg1 + 0x19dc)
        result = 0
        
        if (ecx_3 s> 0)
            do
                if (*(arg2 + (result << 2)) == edx)
                    arg4 = 1
                    break
                
                result += 1
            while (result s< ecx_3)
    else
        int32_t ecx = *arg3
        edx = *(arg1 + 0x19dc)
        result = 0
        
        if (ecx s> 0)
            do
                if (*(arg2 + (result << 2)) == edx)
                    *arg3 = ecx - 1
                    *(arg2 + (result << 2)) = *(arg2 + ((ecx - 1) << 2))
                    break
                
                result += 1
            while (result s< ecx)
    
    int32_t i = 0
    
    if (*(arg1 + 0x19d0) s> 0)
        do
            result, edx = sub_528fa0(sub_525900(i, edx, arg1), arg2, arg3, arg4.d)
            i += 1
        while (i s< *(arg1 + 0x19d0))
    
    return result
}
