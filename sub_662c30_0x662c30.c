// 函数名称: sub_662c30
// 虚拟地址: 0x662c30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_662c30(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    char* var_8 = nullptr
    
    if (sub_662aa0(arg1, arg2, &result, &var_8) != 0)
        char* eax_1 = var_8
        
        if (eax_1 == arg2 || eax_1[arg1] == 0)
            return result
    
    return 0
}
