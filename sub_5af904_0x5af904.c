// 函数名称: sub_5af904
// 虚拟地址: 0x5af904
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5af904(int32_t arg1, HANDLE arg2)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    
    if (arg1 s>= 0 && arg1 u< data_3166edc)
        int32_t esi_3 = (arg1 & 0x1f) << 6
        
        if (*(esi_3 + (&data_3166ee0)[arg1 s>> 5]) == 0xffffffff)
            if (data_8b8310 == 1)
                if (arg1 == 0)
                    SetStdHandle(STD_INPUT_HANDLE, arg2)
                else if (arg1 == 1)
                    SetStdHandle(STD_OUTPUT_HANDLE, arg2)
                else if (arg1 == 2)
                    SetStdHandle(STD_ERROR_HANDLE, arg2)
            
            *(esi_3 + (&data_3166ee0)[arg1 s>> 5]) = arg2
            return 0
    
    *__errno() = 9
    *___doserrno() = 0
    return 0xffffffff
}
