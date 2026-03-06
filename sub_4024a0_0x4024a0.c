// 函数名称: sub_4024a0
// 虚拟地址: 0x4024a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4024a0(char arg1)
{
    // 第一条实际指令: void* edx = data_27e7a40
    void* edx = data_27e7a40
    int32_t ecx = *(edx + 0x28)
    
    if (ecx != 0)
        void* esi_1 = data_27e7bb8
        uint32_t eax = zx.d(ecx.w)
        
        if (eax u< *(esi_1 + 4))
            eax = eax * 0x4c + *esi_1
            
            if (*(eax + 0x48) == ecx)
                sub_4c6a10(eax)
                edx = data_27e7a40
    
    *(edx + 0x20) = 0
    *(edx + 0x24) = 0
    *(edx + 0x2c4958) = 0
    *(edx + 0x2c9048) = 0
    data_8c873c = fconvert.s(float.t(0))
    
    if (arg1 != 0)
        sub_475260()
}
