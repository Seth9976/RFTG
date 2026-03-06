// 函数名称: __fclose_nolock
// 虚拟地址: 0x5a8bf4
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t__fclose_nolock(int32_t* arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    int32_t result = 0xffffffff
    
    if (arg1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0xffffffff
    
    if ((arg1[3].b & 0x83) != 0)
        result = sub_5a910e(arg1)
        sub_5b206f(arg1)
        
        if (sub_5b1fab(__fileno(arg1)) s>= 0)
            int32_t eax_6 = arg1[7]
            
            if (eax_6 != 0)
                __free_base(eax_6)
                arg1[7] = 0
        else
            result = 0xffffffff
    
    arg1[3] = 0
    return result
}
