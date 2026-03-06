// 函数名称: sub_5d87f0
// 虚拟地址: 0x5d87f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5d87f0(int32_t arg1, int32_t* arg2 @ edi)
{
    // 第一条实际指令: int32_t i_2 = arg2[2]
    int32_t i_2 = arg2[2]
    int32_t i = i_2
    
    if (i == 0)
        i = arg1
    else if (arg2[3] + arg1 u> i)
        do
            i *= 2
        while (arg1 + arg2[3] u> i)
    
    if (i u> i_2)
        int32_t i_1 = i
        int32_t var_c_1 = arg2[1]
        int32_t eax_2 = sub_5d0ae0()
        
        if (eax_2 == 0)
            sub_5cd050(eax_2)
            return 0
        
        arg2[1] = eax_2
        arg2[2] = i
        *arg2 = eax_2
    
    return 1
}
