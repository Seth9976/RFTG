// 函数名称: sub_672bf0
// 虚拟地址: 0x672bf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_672bf0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* result = arg1
    int32_t* result = arg1
    char ecx = result[2].b
    char edx
    
    if (ecx == 6)
        int32_t i_4 = *result
        bool cond:0_1 = *(result + 9) != 8
        result = arg2
        
        if (cond:0_1)
            if (i_4 != 0)
                int32_t i
                
                do
                    edx = 0xff - *(result + 6)
                    result = &result[2]
                    *(result - 2) = edx
                    i = i_4
                    i_4 -= 1
                    *(result - 1) = 0xff - *(result - 1)
                while (i != 1)
        else if (i_4 != 0)
            int32_t i_1
            
            do
                edx = 0xff - *(result + 3)
                result = &result[1]
                i_1 = i_4
                i_4 -= 1
                *(result - 1) = edx
            while (i_1 != 1)
    else if (ecx == 4)
        if (*(result + 9) != 8)
            int32_t i_5 = *result
            result = arg2
            
            if (i_5 != 0)
                int32_t i_2
                
                do
                    edx = 0xff - *(result + 2)
                    result = &result[1]
                    *(result - 2) = edx
                    i_2 = i_5
                    i_5 -= 1
                    *(result - 1) = 0xff - *(result - 1)
                while (i_2 != 1)
        else
            int32_t i_7 = *result
            result = arg2
            int32_t* result_1 = result
            
            if (i_7 != 0)
                int32_t i_6 = i_7
                int32_t i_3
                
                do
                    i_7.b = *result_1
                    *result = i_7.b
                    i_7.b = 0xff
                    i_7.b = 0xff - *(result_1 + 1)
                    result += 2
                    *(result - 1) = i_7.b
                    result_1 += 2
                    i_3 = i_6
                    i_6 -= 1
                while (i_3 != 1)
    return result
}
