// 函数名称: sub_5ac3ca
// 虚拟地址: 0x5ac3ca
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ac3ca(int128_t* arg1, int32_t arg2, int128_t* arg3, void* arg4)
{
    // 第一条实际指令: if (arg4 != 0)
    if (arg4 != 0)
        if (arg1 == 0)
        label_5ac3e8:
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            return 0x16
        
        if (arg3 == 0 || arg2 u< arg4)
            sub_5abfc0(arg1, 0, arg2)
            
            if (arg3 == 0)
                goto label_5ac3e8
            
            if (arg2 u>= arg4)
                return 0x16
            
            *__errno() = 0x22
            __invalid_parameter_noinfo()
            return 0x22
        
        sub_5ab990(arg1, arg3, arg4)
    
    return 0
}
