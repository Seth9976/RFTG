// 函数名称: sub_4eabe0
// 虚拟地址: 0x4eabe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4eabe0(int32_t* arg1)
{
    // 第一条实际指令: int32_t edx = arg1[1]
    int32_t edx = arg1[1]
    int32_t eax = 0
    
    if (edx != 0)
        void* ecx = *arg1
        
        do
            if ((*(ecx + 0x90) & 0xffff0000) != 0)
                return *(ecx + 0x90)
            
            eax += 1
            ecx += 0x94
        while (eax u< edx)
    
    return 0
}
