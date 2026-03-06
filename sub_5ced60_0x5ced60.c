// 函数名称: sub_5ced60
// 虚拟地址: 0x5ced60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5ced60(char* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1 == 0 || *arg1 == 0)
    if (arg1 == 0 || *arg1 == 0)
        char const* const __saved_esi = "name"
        sub_5cce60("Parameter '%s' is invalid")
        return 0xffffffff
    
    if (arg2 == 0)
        char const* const __saved_edi = "callback"
        sub_5cce60("Parameter '%s' is invalid")
        return 0xffffffff
    
    sub_5cece0(arg1, arg2, arg3)
    int32_t var_20 = 0xc
    int32_t* eax_1 = sub_5d0ac0()
    *eax_1 = arg2
    int32_t* i = data_bedd1c
    eax_1[1] = arg3
    
    for (; i != 0; i = i[4])
        if (sub_5cd590(arg1, *i) == 0)
            goto label_5cee0e
    
    int32_t var_14_2 = 0x14
    int32_t* result = sub_5d0ac0()
    i = result
    
    if (i == 0)
        return result
    
    *i = sub_5cd390(arg1)
    i[1] = 0
    i[2] = 0
    i[3] = 0
    i[4] = data_bedd1c
    data_bedd1c = i
    label_5cee0e:
    eax_1[2] = i[3]
    i[3] = eax_1
    int32_t eax_5 = sub_5cec90(arg1)
    return arg2(arg3, arg1, eax_5, eax_5)
}
