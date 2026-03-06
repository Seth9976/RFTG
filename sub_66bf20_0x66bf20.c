// 函数名称: sub_66bf20
// 虚拟地址: 0x66bf20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_66bf20(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* result = arg1
    int32_t* result = arg1
    char ecx = result[2].b
    int32_t i_4 = *result
    
    if (ecx == 6)
        void* eax = result[1]
        
        if (*(result + 9) != 8)
            result = eax + arg2
            
            if (i_4 != 0)
                int32_t i_5 = i_4
                int32_t i
                
                do
                    i_4.b = 0xff
                    i_4.b = 0xff - *(result - 1)
                    result -= 8
                    *(result + 7) = i_4.b
                    i_4.b = 0xff
                    i_4.b = 0xff - *(result + 6)
                    i = i_5
                    i_5 -= 1
                    *(result + 6) = i_4.b
                while (i != 1)
        else
            result = eax + arg2
            
            if (i_4 != 0)
                int32_t i_1
                
                do
                    ecx = 0xff - *(result - 1)
                    result -= 4
                    i_1 = i_4
                    i_4 -= 1
                    *(result + 3) = ecx
                while (i_1 != 1)
    else if (ecx == 4)
        void* eax_1 = result[1]
        
        if (*(result + 9) != 8)
            result = eax_1 + arg2
            
            if (i_4 != 0)
                int32_t i_7 = i_4
                int32_t i_2
                
                do
                    i_4.b = 0xff
                    i_4.b = 0xff - *(result - 1)
                    result -= 4
                    *(result + 3) = i_4.b
                    i_4.b = 0xff
                    i_4.b = 0xff - *(result + 2)
                    i_2 = i_7
                    i_7 -= 1
                    *(result + 2) = i_4.b
                while (i_2 != 1)
        else
            result = eax_1 + arg2
            int32_t* result_1 = result
            
            if (i_4 != 0)
                int32_t i_6 = i_4
                int32_t i_3
                
                do
                    i_4.b = 0xff
                    i_4.b = 0xff - *(result - 1)
                    result -= 2
                    *(result_1 - 1) = i_4.b
                    i_4.b = *result
                    result_1 -= 2
                    i_3 = i_6
                    i_6 -= 1
                    *result_1 = i_4.b
                while (i_3 != 1)
    
    return result
}
