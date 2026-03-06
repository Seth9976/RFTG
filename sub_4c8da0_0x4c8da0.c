// 函数名称: sub_4c8da0
// 虚拟地址: 0x4c8da0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __fastcallsub_4c8da0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    
    if (arg1 == 0)
        return 
    
    void* edx_1 = data_27e7bb8
    uint32_t eax = zx.d(arg1.w)
    
    if (eax u>= *(edx_1 + 4))
        return 
    
    eax = eax * 0x4c + *edx_1
    
    if (*(eax + 0x48) == arg1)
        sub_4c6a10(eax)
}
