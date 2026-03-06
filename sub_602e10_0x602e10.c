// 函数名称: sub_602e10
// 虚拟地址: 0x602e10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_602e10(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    int32_t* eax_1 = sub_602020(esi[2], arg2)
    void* esi_1 = esi[2]
    arg1 = nullptr
    arg2 = nullptr
    
    if (eax_1 == 0)
        return 0x80070057
    
    if ((**eax_1)(eax_1, 0x836120, &arg1) s>= 0)
        *(esi_1 + 0x78) = 0
        sub_601c60(esi_1)
        int32_t* eax_4 = arg1
        (*(*eax_4 + 8))(eax_4)
    
    if ((**eax_1)(eax_1, 0x836100, &arg2) s>= 0)
        int32_t temp1_1 = *(esi_1 + 0x14a4)
        *(esi_1 + 0x14a4) -= 1
        
        if (temp1_1 == 1)
            sub_602ad0(esi_1)
        
        int32_t* eax_8 = arg2
        (*(*eax_8 + 8))(eax_8)
    
    return 0
}
