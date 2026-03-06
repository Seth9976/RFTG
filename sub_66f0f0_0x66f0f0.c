// 函数名称: sub_66f0f0
// 虚拟地址: 0x66f0f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_66f0f0(void* arg1)
{
    // 第一条实际指令: void* ecx = arg1
    void* ecx = arg1
    
    if (ecx == 0)
        return 
    
    int32_t eax_1 = *(ecx + 0x124)
    arg1.b = (eax_1 u>> 0x18).b
    arg1:1.b = (eax_1 u>> 0x10).b
    arg1:3.b = eax_1.b
    *(ecx + 0x2ac) = 0x82
    arg1:2.b = (eax_1 u>> 8).b
    sub_666640(ecx, &arg1, 4)
}
