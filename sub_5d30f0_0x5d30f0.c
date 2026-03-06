// 函数名称: sub_5d30f0
// 虚拟地址: 0x5d30f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_5d30f0(int32_t arg1, int16_t* arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 1
    
    int32_t var_10 = sub_5cd1d0(arg2) * 2 + 2
    int16_t* var_14 = arg2
    int32_t eax_2 = sub_5dd160("UTF-8", "UTF-16LE")
    
    if (eax_2 != 0)
        arg3(eax_2)
        int32_t var_10_1 = eax_2
        sub_5d0af0()
    
    return 1
}
