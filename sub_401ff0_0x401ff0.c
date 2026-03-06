// 函数名称: sub_401ff0
// 虚拟地址: 0x401ff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_401ff0(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* ecx_1 = data_27e7a40
    *(ecx_1 + 0x34) = data_27c05d8
    data_8c873c = fconvert.s(fconvert.t(10f))
    int32_t* edx_1 = *(arg1 + 8)
    var_8:3.b = 0
    
    if (edx_1 s< 0x10 || *(arg1 + 0xc) == 2 || *(arg1 + 0x14) == 0)
        sub_4c5680("status response wrong version (response)")
        *(data_27e7a40 + 0x24) = 5
    else
        int32_t var_18_1 = 0
        
        if (sub_4ceca0(data_307b5dc, edx_1, arg1 + 0xc, arg1 + 0xc, ecx_1) != 0)
            int32_t eax_3 = *(arg1 + 0xc) - 1
            
            if (eax_3 u> 3)
                sub_4c5870("Halt", &data_83f3d3, "..\code\CardNet.cpp", 0x198, 
                    "CardNetClientGotStatusResponse")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            switch (eax_3)
                case 0
                    *(data_27e7a40 + 0x24) = 8
                    var_8:3.b = 1
                case 1
                    *(data_27e7a40 + 0x24) = 5
                case 2
                    *(data_27e7a40 + 0x24) = 6
                case 3
                    *(data_27e7a40 + 0x24) = 7
            
            sub_4c4590(*(arg1 + 0x14))
            int32_t* eax_6
            eax_6.b = var_8:3.b
            return eax_6
        
        sub_4c5680("status response: failed to read")
        *(data_27e7a40 + 0x24) = 5
    
    sub_4c4590(&data_83f3d3)
    int32_t* eax_9
    eax_9.b = 0
    return eax_9
}
