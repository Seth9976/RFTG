// 函数名称: sub_602020
// 虚拟地址: 0x602020
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_602020(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* var_8 = nullptr
    int32_t* var_8 = nullptr
    int32_t result = 0
    int32_t* eax_1 = *(arg1 + 0x1508)
    
    if ((**eax_1)(eax_1, 0x8360c0, &var_8) s>= 0)
        int32_t* eax_4 = var_8
        (*(*eax_4 + 0x18))(eax_4, arg2, &result)
        int32_t* eax_6 = var_8
        (*(*eax_6 + 8))(eax_6)
    
    return result
}
