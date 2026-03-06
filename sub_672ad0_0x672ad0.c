// 函数名称: sub_672ad0
// 虚拟地址: 0x672ad0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_672ad0(void* arg1, void* arg2)
{
    // 第一条实际指令: void* result = arg1
    void* result = arg1
    char ecx = *(result + 8)
    int32_t ebx
    int32_t var_8 = ebx
    char edx
    
    if (ecx != 6)
        if (ecx == 4)
            if (*(result + 9) != 8)
                int32_t i_7 = *result
                result = arg2
                void* result_4 = result
                
                if (i_7 != 0)
                    int32_t i
                    
                    do
                        edx = *result
                        arg1:1.b = *(result + 1)
                        *result_4 = *(result + 2)
                        *(result_4 + 1) = *(result + 3)
                        *(result_4 + 2) = edx
                        *(result_4 + 3) = arg1:1.b
                        result += 4
                        result_4 += 4
                        i = i_7
                        i_7 -= 1
                    while (i != 1)
            else
                int32_t i_9 = *result
                result = arg2
                void* result_3 = result
                
                if (i_9 != 0)
                    int32_t i_6 = i_9
                    int32_t i_1
                    
                    do
                        ebx.b = *(result + 1)
                        i_9.b = *result
                        *result_3 = ebx.b
                        *(result_3 + 1) = i_9.b
                        result += 2
                        result_3 += 2
                        i_1 = i_6
                        i_6 -= 1
                    while (i_1 != 1)
    else if (*(result + 9) != 8)
        int32_t i_5 = *result
        result = arg2
        void* result_2 = result
        
        if (i_5 != 0)
            int32_t i_2
            
            do
                edx = *result
                arg1:1.b = *(result + 1)
                *result_2 = *(result + 2)
                *(result_2 + 1) = *(result + 3)
                *(result_2 + 2) = *(result + 4)
                *(result_2 + 3) = *(result + 5)
                *(result_2 + 4) = *(result + 6)
                *(result_2 + 5) = *(result + 7)
                *(result_2 + 6) = edx
                *(result_2 + 7) = arg1:1.b
                result += 8
                result_2 += 8
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
    else
        int32_t i_8 = *result
        result = arg2
        void* result_1 = result
        
        if (i_8 != 0)
            int32_t i_4 = i_8
            int32_t i_3
            
            do
                i_8.b = *result
                *result_1 = *(result + 1)
                *(result_1 + 1) = *(result + 2)
                *(result_1 + 2) = *(result + 3)
                *(result_1 + 3) = i_8.b
                result += 4
                result_1 += 4
                i_3 = i_4
                i_4 -= 1
            while (i_3 != 1)
    return result
}
