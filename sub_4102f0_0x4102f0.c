// 函数名称: sub_4102f0
// 虚拟地址: 0x4102f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4102f0(int32_t arg1, void* arg2, int32_t arg3 @ esi)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t i = 0
    int32_t* edx = arg2 + 0x50
    
    do
        if (arg3 == i)
            return result
        
        if (*edx != 0)
            result += 1
        
        i += 1
        edx = &edx[3]
    while (i s< 4)
    
    return 0xffffffff
}
