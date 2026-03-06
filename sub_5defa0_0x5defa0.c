// 函数名称: sub_5defa0
// 虚拟地址: 0x5defa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5defa0(HMODULE arg1, PSTR arg2)
{
    // 第一条实际指令: int32_t result = GetProcAddress(arg1, arg2)
    int32_t result = GetProcAddress(arg1, arg2)
    
    if (result != 0)
        return result
    
    void var_204
    sub_5cd270(&var_204, "Failed loading ", 0x200)
    sub_5cd340(&var_204, arg2, 0x200)
    sub_5dc5a0(&var_204)
    return result
}
