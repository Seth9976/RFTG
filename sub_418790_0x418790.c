// 函数名称: sub_418790
// 虚拟地址: 0x418790
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __fastcallsub_418790(int32_t arg1, int32_t arg2, int32_t arg3 @ edi)
{
    // 第一条实际指令: void* i_1 = nullptr
    void* i_1 = nullptr
    int32_t* esi_1 = *(data_27e7a40 + 0x548) + 0x43960
    label_4187b0:
    void* i
    
    if (i_1 != 0)
        i = i_1 + 0xb0
    else
        i = *esi_1
    
    for (; i u< esi_1[1] * 0xb0 + *esi_1; i += 0xb0)
        if ((*(i + 0xac) & 0xffff0000) != 0)
            i_1 = i
            
            if (*i != 4)
                goto label_4187b0
            
            if (*(i + 0x84) != arg3)
                goto label_4187b0
            
            bool cond:1_1
            
            if (arg2 == 0xffffffff)
                cond:1_1 = *(i + 0x88) != 0
            else
                cond:1_1 = *(i + 0x64) != arg2
            
            if (cond:1_1)
                goto label_4187b0
            
            return i
    
    if (arg2 == 0xffffffff)
        int128_t* eax_2 = sub_463e80(esi_1)
        *eax_2 = 4
        *(eax_2 + 0x84) = arg3
        *(eax_2 + 0x88) = 0
        return eax_2
    
    sub_4c5870("seat == -1", &data_83f3d3, "..\code\RFTGClient.cpp", 0x8e, "RFTGGfxLookupGoal")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
