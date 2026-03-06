// 函数名称: sub_5d8880
// 虚拟地址: 0x5d8880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5d8880(int32_t* arg1, int32_t arg2 @ esi, int32_t arg3)
{
    // 第一条实际指令: int32_t result = sub_5d87f0(arg2, arg1)
    int32_t result = sub_5d87f0(arg2, arg1)
    
    if (result == 0)
        return result
    
    int32_t var_c = arg2
    int32_t var_10 = arg3
    int32_t var_14 = arg1[1] + arg1[3]
    sub_5cd110()
    arg1[3] += arg2
    return 1
}
