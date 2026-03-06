// 函数名称: sub_66bdf0
// 虚拟地址: 0x66bdf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_66bdf0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* result = arg1
    int32_t* result = arg1
    char ecx = result[2].b
    uint32_t i_8 = *result
    int32_t ebx
    int32_t var_8 = ebx
    
    if (ecx == 6)
        void* eax = result[1]
        
        if (*(result + 9) != 8)
            result = eax + arg2
            int32_t* result_2 = result
            
            if (i_8 != 0)
                uint32_t i_5 = i_8
                uint32_t i
                
                do
                    i_8.b = *(result - 1)
                    arg1:1.b = *(result - 2)
                    *(result_2 - 1) = *(result - 3)
                    *(result_2 - 2) = result[-1].b
                    *(result_2 - 3) = *(result - 5)
                    result_2[-1].b = *(result - 6)
                    *(result_2 - 5) = *(result - 7)
                    char ebx_11 = result[-2].b
                    result -= 8
                    *(result_2 - 6) = ebx_11
                    *(result_2 - 7) = i_8.b
                    result_2 -= 8
                    i = i_5
                    i_5 -= 1
                    *result_2 = arg1:1.b
                while (i != 1)
        else
            result = eax + arg2
            int32_t* result_1 = result
            
            if (i_8 != 0)
                uint32_t i_4 = i_8
                uint32_t i_1
                
                do
                    i_8.b = *(result - 1)
                    *(result_1 - 1) = *(result - 2)
                    *(result_1 - 2) = *(result - 3)
                    char ebx_3 = result[-1].b
                    result -= 4
                    *(result_1 - 3) = ebx_3
                    result_1 -= 4
                    i_1 = i_4
                    i_4 -= 1
                    *result_1 = i_8.b
                while (i_1 != 1)
    else if (ecx == 4)
        void* eax_1 = result[1]
        
        if (*(result + 9) != 8)
            result = eax_1 + arg2
            int32_t* result_4 = result
            
            if (i_8 != 0)
                uint32_t i_7 = i_8
                uint32_t i_2
                
                do
                    i_8.b = *(result - 1)
                    arg1:1.b = *(result - 2)
                    *(result_4 - 1) = *(result - 3)
                    char ebx_16 = result[-1].b
                    result -= 4
                    *(result_4 - 2) = ebx_16
                    *(result_4 - 3) = i_8.b
                    result_4 -= 4
                    i_2 = i_7
                    i_7 -= 1
                    *result_4 = arg1:1.b
                while (i_2 != 1)
        else
            result = eax_1 + arg2
            int32_t* result_3 = result
            
            if (i_8 != 0)
                uint32_t i_6 = i_8
                uint32_t i_3
                
                do
                    i_8.b = *(result - 1)
                    ebx.b = *(result - 2)
                    result -= 2
                    *(result_3 - 1) = ebx.b
                    result_3 -= 2
                    i_3 = i_6
                    i_6 -= 1
                    *result_3 = i_8.b
                while (i_3 != 1)
    
    return result
}
