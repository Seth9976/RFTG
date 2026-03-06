// 函数名称: sub_611180
// 虚拟地址: 0x611180
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_611180(int32_t arg1, char arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t eax = arg3[2]
    int32_t eax = arg3[2]
    int32_t ecx = arg3[3]
    
    if ((*arg3 & 2) != 0)
        sub_5d6350(arg3)
    
    int32_t* result = sub_610ee0(arg1, arg2, arg3, 0, 0, eax, ecx)
    
    if ((*arg3 & 2) != 0)
        sub_5d6380(arg3)
    
    return result
}
