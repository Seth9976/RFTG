// 函数名称: sub_543f30
// 虚拟地址: 0x543f30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_543f30(void* arg1)
{
    // 第一条实际指令: void* ecx = data_307882c
    void* ecx = data_307882c
    
    if (*(ecx + 0x4090) == arg1)
        return 
    
    *(ecx + 0x4090) = arg1
    data_307943c(0x8892, arg1)
    arg1 = data_27e7fe4
    *(arg1 + 0xc) += 1
}
