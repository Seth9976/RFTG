// 函数名称: sub_5cd2b0
// 虚拟地址: 0x5cd2b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5cd2b0(int32_t arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: void* result_2 = sub_5cd1b0(arg2)
    void* result_2 = sub_5cd1b0(arg2)
    void* result = arg3 - 1
    
    if (result_2 u< result)
        result = result_2
    
    if (result == 0)
        *(result + arg1) = 0
        return result
    
    result_2.b = *(result + arg2 - 1)
    
    if (result_2.b + 0x40 u> 0x34)
        result_2.b -= 0x80
        
        if (result_2.b u<= 0x3f)
            void* edi_1 = result - 1
            
            if (edi_1 != 0)
                void* i
                
                do
                    result_2.b = *(edi_1 + arg2)
                    result_2 = sub_5cd0d0(result_2)
                    
                    if (result_2.b != 0)
                        if (result - edi_1 != sx.d(result_2.b) + 1)
                            result = edi_1
                        
                        break
                    
                    i = edi_1
                    edi_1 -= 1
                while (i != 1)
    else
        result -= 1
    
    void* result_1 = result
    char* var_18 = arg2
    int32_t var_1c = arg1
    sub_5cd110()
    *(result + arg1) = 0
    return result
}
