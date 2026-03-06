// 函数名称: sub_5af985
// 虚拟地址: 0x5af985
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5af985(int32_t arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_10 = edi
    
    if (arg1 s>= 0 && arg1 u< data_3166edc)
        int32_t* eax_3 = (&data_3166ee0)[arg1 s>> 5]
        
        if ((eax_3[(arg1 & 0x1f) * 0x10 + 1].b & 1) != 0 && eax_3[(arg1 & 0x1f) * 0x10] != 0xffffffff)
            if (data_8b8310 == 1)
                if (arg1 == 0)
                    int32_t var_14_3 = 0
                    SetStdHandle(STD_INPUT_HANDLE, nullptr)
                else if (arg1 == 1)
                    int32_t var_14_2 = 0
                    SetStdHandle(STD_OUTPUT_HANDLE, nullptr)
                else if (arg1 == 2)
                    int32_t var_14_1 = 0
                    SetStdHandle(STD_ERROR_HANDLE, nullptr)
            
            *(((arg1 & 0x1f) << 6) + (&data_3166ee0)[arg1 s>> 5]) = 0xffffffff
            return 0
    
    *__errno() = 9
    *___doserrno() = 0
    return 0xffffffff
}
