// 函数名称: sub_5457b0
// 虚拟地址: 0x5457b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_5457b0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t texture = *sub_54b850(arg1 + 0x4240, arg2)
    uint32_t texture = *sub_54b850(arg1 + 0x4240, arg2)
    void* eax_1 = data_307882c
    
    if (*(eax_1 + 0x409c) != texture)
        *(eax_1 + 0x409c) = texture
        
        if (*(eax_1 + 0x4098) != 0)
            *(eax_1 + 0x4098) = 0
            data_30792c4(0x84c0)
        
        glBindTexture(0xde1, texture)
    
    return data_30798bc(0xde1)
}
