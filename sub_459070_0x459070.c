// 函数名称: sub_459070
// 虚拟地址: 0x459070
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_459070(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t ebx = 0
    void* result = (arg3 + (arg1 << 2)) * 0x1c0 + *(data_27e7a40 + 0x548) + 0x2c0c0
    *(result + 0x124) = 1
    
    if (arg5 s> 0)
        do
            void* edx_4 = *(data_27e7a40 + 0x548)
            
            if (edx_4 == 0)
                sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, 
                    "GetGame")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* esi_1 = *(edx_4 + 0x45844)
            void* ecx_3 = *(esi_1 + *(arg4 + (ebx << 2)) * 0x14 + 0x46c)
            edx_4.b = *(ecx_3 + 0xe)
            int32_t i
            
            if (edx_4.b != 1)
                i = sx.d(edx_4.b)
            else
                if (*(ecx_3 + 4) != 0xa2)
                    sub_4c5870("g->deck[world].d_ptr->index == CARD_ALIEN_OORT_CLOUD_REFINERY", 
                        &data_83f3d3, "..\code\RFTGClient.cpp", 0x41ca, "CardKind")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                i = sx.d(*(esi_1 + 0x1eb4))
            
            int32_t esi_2 = *(result + 0x164)
            int32_t ecx_4 = 0
            
            if (esi_2 s<= 0)
            label_459112:
                *(result + 0x164) = esi_2 + 1
                *(result + (esi_2 << 3) + 0x13c) = i
                *(result + (esi_2 << 3) + 0x140) = 1
            else
                void* edx_5 = result + 0x13c
                
                while (*edx_5 != i)
                    ecx_4 += 1
                    edx_5 += 8
                    
                    if (ecx_4 s>= esi_2)
                        goto label_459112
                
                *(result + (ecx_4 << 3) + 0x140) += 1
            
            ebx += 1
        while (ebx s< arg5)
    
    return result
}
