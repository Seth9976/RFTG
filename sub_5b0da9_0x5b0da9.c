// 函数名称: sub_5b0da9
// 虚拟地址: 0x5b0da9
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __fastcallsub_5b0da9(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t temp0 = arg2[1]
    int32_t temp0 = arg2[1]
    arg2[1] -= 1
    
    if (temp0 - 1 s< 0)
        return sub_5b1ded(arg2)
    
    char* ecx = *arg2
    uint32_t result = zx.d(*ecx)
    *arg2 = &ecx[1]
    return result
}
