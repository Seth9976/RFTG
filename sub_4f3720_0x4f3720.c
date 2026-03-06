// 函数名称: sub_4f3720
// 虚拟地址: 0x4f3720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_4f3720(int32_t arg1, int32_t* arg2, int32_t* arg3 @ esi)
{
    // 第一条实际指令: void* eax = *arg3
    void* eax = *arg3
    void* i
    
    if (eax != 0)
        i = eax + 0x7c
    else
        i = *arg2
    
    for (; i u< arg2[1] * 0x7c + *arg2; i += 0x7c)
        if ((*(i + 0x78) & 0xffff0000) != 0)
            *arg3 = i
            i.b = 1
            return i
    
    *arg3 = 0xffffffff
    i.b = 0
    return i
}
