// 函数名称: sub_601fb0
// 虚拟地址: 0x601fb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_601fb0(void* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg3 == 0)
    if (arg3 == 0)
        return 0x80070057
    
    *arg3 = 0
    int32_t eax_1 = sub_5cd130(arg2, 0x836190, 0x10)
    int32_t eax_2
    
    if (eax_1 != 0)
        eax_2 = sub_5cd130(arg2, 0x8360e0, 0x10)
    
    if (eax_1 == 0 || eax_2 == 0)
        *arg3 = arg1
    
    if (*arg3 == 0)
        return 0x80004002
    
    sub_601f70(arg1)
    return 0
}
