// 函数名称: sub_66eaa0
// 虚拟地址: 0x66eaa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_66eaa0(void* arg1, char* arg2)
{
    // 第一条实际指令: char* result
    char* result
    result.b = *(arg1 + 8)
    
    if (result.b == 0)
        int32_t i_3 = *(arg1 + 4)
        result = arg2
        
        if (i_3 != 0)
            int32_t i
            
            do
                *result = not.b(*result)
                result = &result[1]
                i = i_3
                i_3 -= 1
            while (i != 1)
    else if (result.b == 4)
        if (*(arg1 + 9) == 8)
            int32_t ecx_1 = *(arg1 + 4)
            result = arg2
            
            if (ecx_1 != 0)
                int32_t i_4 = ((ecx_1 - 1) u>> 1) + 1
                int32_t i_1
                
                do
                    *result = not.b(*result)
                    result = &result[2]
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
        else if (result.b == 4 && *(arg1 + 9) == 0x10)
            int32_t ecx_4 = *(arg1 + 4)
            
            if (ecx_4 != 0)
                result = &arg2[1]
                int32_t i_5 = ((ecx_4 - 1) u>> 2) + 1
                int32_t i_2
                
                do
                    result[0xffffffff] = not.b(result[0xffffffff])
                    *result = not.b(*result)
                    result = &result[4]
                    i_2 = i_5
                    i_5 -= 1
                while (i_2 != 1)
    
    return result
}
