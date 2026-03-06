// 函数名称: sub_59b860
// 虚拟地址: 0x59b860
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_59b860(uint32_t arg1) __pure
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (arg1 == 0)
        return 0xffffffff
    
    if (arg1 u>= 0x10000)
        result = 0x10
        arg1 u>>= 0x10
    
    if (arg1 u>= 0x100)
        result += 8
        arg1 u>>= 8
    
    if (arg1 u>= 0x10)
        result += 4
        arg1 u>>= 4
    
    if (arg1 u>= 4)
        result += 2
        arg1 u>>= 2
    
    if (arg1 u< 2)
        return result
    
    return result + 1
}
