// 函数名称: sub_5c6ee0
// 虚拟地址: 0x5c6ee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5c6ee0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_14
    int32_t var_14
    
    if (arg2 s>= 0 && arg2 s< j_sub_5cf300())
        int32_t* eax_2 = sub_5d0150(&var_14, arg2)
        *arg1 = *eax_2
        arg1[1] = eax_2[1]
        int32_t eax_3 = eax_2[3]
        arg1[2] = eax_2[2]
        arg1[3] = eax_3
        return arg1
    
    int32_t var_1c_1 = j_sub_5cf300()
    sub_5cce60("There are %d joysticks available")
    int32_t var_24 = 0x10
    int32_t var_28 = 0
    int32_t* var_2c = &var_14
    sub_5cd100()
    *arg1 = var_14
    int32_t var_10
    arg1[1] = var_10
    int32_t var_c
    arg1[2] = var_c
    int32_t var_8
    arg1[3] = var_8
    return arg1
}
