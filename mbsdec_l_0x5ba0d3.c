// 函数名称: __mbsdec_l
// 虚拟地址: 0x5ba0d3
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*__mbsdec_l(int32_t arg1, void* arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0
    
    if (arg2 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    else if (arg1 u< arg2)
        void var_14
        sub_5a73dd(&var_14, arg3)
        char* result = arg2 - 1
        int32_t var_10
        
        if (*(var_10 + 8) != 0)
            do
                result -= 1
                
                if (arg1 u> result)
                    break
            while ((*(zx.d(*result) + var_10 + 0x1d) & 4) != 0)
            
            result = arg2 - ((arg2 - result) & 1) - 1
        
        char var_8
        void* var_c
        
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        return result
    
    return nullptr
}
